import express from "express";

const app = express();

// Primeiro exercício com if/else: rejeitar números negativos.
app.get("/soma", (req, res) => {
    const num1 = Number(req.query.num1);
    const num2 = Number(req.query.num2);

    if (num1 < 0 || num2 < 0) {
        res.send("Insira apenas números não negativos");
    } else {
        res.send("A soma de " + num1 + " e " + num2 + " é " + (num1 + num2));
    }
});

app.listen(3000, () => {
    console.log("Teste em http://localhost:3000/soma?num1=8&num2=-2");
});
