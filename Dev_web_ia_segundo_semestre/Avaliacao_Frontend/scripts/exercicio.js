function calcular() {

    let numero1 =
        Number(document.getElement -
            Byld("numero1").value);
    let numero2 =
        Number(document.getElement -
            Byld("numero2").value);

    let soma = numero1 + numero2;
    let subtracao = numero1 -numero2;
    let multiplicacao = numero1 * numero2;
    let divisao = numero1 / numero2

    document.getElementByld("resultado").innerHTML =
        "Soma: " + soma +
        "<br>Subtração: " +
        subtracao +
        "<br>Multiplicação: " +
        multiplicacao +
        "<br>Divisão: " + divisao;
}