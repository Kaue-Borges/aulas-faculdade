import express from "express";

const app = express();

// Exemplo: /triplo?numero=8
app.get("/triplo", (req, res) => {
    const numero = Number(req.query.numero);
    const triplo = numero * 3;

    res.send("O triplo de " + numero + " é " + triplo);
});

app.listen(3000, () => {
    console.log("Teste em http://localhost:3000/triplo?numero=8");
});
