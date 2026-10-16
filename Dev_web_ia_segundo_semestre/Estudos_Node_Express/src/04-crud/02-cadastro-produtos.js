
import express from "express";

const app = express();

// Permite que o Express leia JSON
app.use(express.json());

app.post("/produtos", (req, res) => {
    const nome = req.body.nome;
    const preco = req.body.preco;
    if (nome === undefined || nome === "" || preco === undefined || preco === "") {
        res.status(400).send("Erro: Nome ou preço não foram informados.");
        return;
    }
    else {
        res.status(201).json({
            mensagem: "Produto cadastrado com sucesso!",
            nome: nome,
            preco: preco
        });
    }
});

app.listen(3000, () => {
    console.log("Servidor rodando na porta http://localhost:3000/produtos");
});
