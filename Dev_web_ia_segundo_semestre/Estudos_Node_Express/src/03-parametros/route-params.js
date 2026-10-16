import express from "express";

const app = express();

// Route parameters fazem parte do caminho da URL.
// Exemplo: /usuarios/25
app.get("/usuarios/:id", (req, res) => {
    const id = req.params.id;

    res.send(`Você buscou o usuário ${id}`);
});

app.listen(3000, () => {
    console.log("Teste em http://localhost:3000/usuarios/25");
});
