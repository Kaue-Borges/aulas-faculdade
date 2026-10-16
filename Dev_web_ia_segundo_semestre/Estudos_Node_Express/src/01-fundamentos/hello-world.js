import express from "express";

const app = express();
const port = 3000;

// Primeira rota GET vista na faculdade.
app.get("/", (req, res) => {
    res.send("Hello World!");
});

app.listen(port, () => {
    console.log(`Servidor rodando em http://localhost:${port}`);
});
