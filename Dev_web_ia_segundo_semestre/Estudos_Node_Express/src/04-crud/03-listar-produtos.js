
import express from "express";

const app = express();

// Permite que o Express leia JSON
app.use(express.json());

// Array que armazena os produtos
const produtos = [];

// Controlador de IDs
let proximoId = 1;

// GET - Listar todos os produtos
app.get("/produtos", (req, res) => {
    res.status(200).json(produtos);
});

// GET - Buscar produto pelo ID
app.get("/produtos/:id", (req, res) => {
    const id = Number(req.params.id);

    const produto = produtos.find(p => p.id === id);

    if (!produto) {
        res.status(404).send("Erro: Produto não encontrado.");
        return;
    }

    res.status(200).json(produto);
});

// POST - Cadastrar novo produto
app.post("/produtos", (req, res) => {
    const nome = req.body.nome;
    const preco = req.body.preco;

    // Validação dos dados
    if (
        nome === undefined ||
        nome === "" ||
        preco === undefined ||
        preco === ""
    ) {
        res.status(400).send(
            "Erro: Nome ou preço não foram informados."
        );
        return;
    }

    // Gerar ID automático
    const id = proximoId++;

    // Criar produto
    const produto = {
        id: id,
        nome: nome,
        preco: preco
    };

    // Adicionar ao array
    produtos.push(produto);

    // Retornar sucesso
    res.status(201).json({
        mensagem: "Produto cadastrado com sucesso!",
        ...produto
    });
});

// Iniciar servidor
app.listen(3000, () => {
    console.log("Servidor rodando em http://localhost:3000/produtos");
});
