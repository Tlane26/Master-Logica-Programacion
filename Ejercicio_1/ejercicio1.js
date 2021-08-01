// Tlanetzi Chavez
// 1 agosto 2021

// Crear una funcion que devuelva la tabla de multiplicar de un numero dado




function tablaMultiplicar(numero){
    //let resultado = "# Tabla del " + numero + " #";
    let resultado = `# Tabla del ${numero} # \n`;

    for(let multiplicador = 1; multiplicador <= 10; multiplicador++){
        //let multiplicacion = (i*numero);

        resultado += `${multiplicador} x ${numero} = ${numero*multiplicador} \n`
        
    }
    return resultado;
}

console.log(tablaMultiplicar(6))
