import express from "express";

const app = express();

// Exemplo: /dobro?numero=5
app.get("/dobro", (req, res) => {
    const numero = Number(req.query.numero);
    const dobro = numero * 2;

    res.send("O dobro de " + numero + " é " + dobro);
});

app.listen(3000, () => {
    console.log("Teste em http://localhost:3000/dobro?numero=5");
});
