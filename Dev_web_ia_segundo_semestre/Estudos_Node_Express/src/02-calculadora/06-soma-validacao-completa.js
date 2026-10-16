
import express from "express";

const app = express();

app.get("/soma", (req, res) => {
    const valor1 = req.query.num1;
    const valor2 = req.query.num2;

    // ESCREVA SUAS VALIDAÇÕES AQUI
    if (valor1 === undefined || valor1 === "" || valor2 === undefined || valor2 === "") {
        res.status(400).send("um ous os dois numeros não foram informados");
        return;
    }
    const num1 = Number(valor1);
    const num2 = Number(valor2);
    if (Number.isNaN(num1) || Number.isNaN(num2)) {
        res.status(400).send("Erro: Um ou ambos os parâmetros não são números válidos.");
        return;
    }
    else if (num1 < 0 || num2 < 0) {
        res.status(400).send("Insira apenas números não negativos");
        return;
    }
    else {
        res.status(200).send("A soma de " + num1 + " e " + num2 + " é " + (num1 + num2));
    }

});

app.listen(3000, () => {
    console.log("Servidor rodando na porta http://localhost:3000/soma?num1=abc&num2=10");
    console.log("Também disponível em http://localhost:3000/soma?num1=-5&num2=10");
    console.log("Também disponível em http://localhost:3000/soma?num1=15&num2=25");
    console.log("Também disponível em http://localhost:3000/soma?num1=undefined&num2=10");
});
