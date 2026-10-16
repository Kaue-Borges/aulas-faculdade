
import express from "express";

const app = express();

// Permite que o Express leia JSON
app.use(express.json());

app.post("/produtos", (req, res) => {
    const nome = req.body.nome;

    res.send("Recebi o nome: " + nome);
});

app.listen(3000, () => {
    console.log("Servidor rodando na porta http://localhost:3000/produtos");
});
