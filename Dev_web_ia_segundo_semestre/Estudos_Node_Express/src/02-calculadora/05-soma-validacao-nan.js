
import express from "express";

const app = express();

app.get("/soma", (req, res) => {
    const num1 = Number(req.query.num1);
    const num2 = Number(req.query.num2);

    // ESCREVA SUAS VALIDAÇÕES AQUI
    if (Number.isNaN(num1) || Number.isNaN(num2)) {
        res.send("Erro: Um ou ambos os parâmetros não são números válidos.");
        return;
    }
    else if (num1 < 0 || num2 < 0) {
        res.send("Insira apenas números não negativos");
        return;
    }
    else {
        res.send("A soma de " + num1 + " e " + num2 + " é " + (num1 + num2));
    }

});

app.listen(3000, () => {
    console.log("Servidor rodando na porta http://localhost:3000/soma?num1=abc&num2=10");
    console.log("Também disponível em http://localhost:3000/soma?num1=-5&num2=10");
    console.log("Também disponível em http://localhost:3000/soma?num1=15&num2=25");
});
