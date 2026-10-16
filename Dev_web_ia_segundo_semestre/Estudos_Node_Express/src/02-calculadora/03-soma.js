import express from "express";

const app = express();

// Exemplo: /soma?num1=15&num2=25
app.get("/soma", (req, res) => {
    const num1 = Number(req.query.num1);
    const num2 = Number(req.query.num2);

    res.send("A soma de " + num1 + " e " + num2 + " é " + (num1 + num2));
});

app.listen(3000, () => {
    console.log("Teste em http://localhost:3000/soma?num1=15&num2=25");
});
