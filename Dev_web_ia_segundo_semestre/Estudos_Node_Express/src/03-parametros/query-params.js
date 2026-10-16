import express from "express";

const app = express();

// Query parameters vêm depois do ? na URL.
// Exemplo: /produtos?nome=notebook&categoria=eletronicos
app.get("/produtos", (req, res) => {
    const nome = req.query.nome;
    const categoria = req.query.categoria;

    res.json({ nome, categoria });
});

app.listen(3000, () => {
    console.log("Teste em http://localhost:3000/produtos?nome=notebook&categoria=eletronicos");
});
