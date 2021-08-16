// Programa para determinar si es un palindromo o no
// Devuelve true o false
// 16 ago 2021

function palindromo(texto){
    let invertido = texto.split('').reverse().join('');

    return invertido === texto;
}

console.log(palindromo("ana"));