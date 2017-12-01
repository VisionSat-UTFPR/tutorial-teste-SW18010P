# Teste sensor de Vibração SW18010P 


## Componentes Internos
    Este componente é recomendado para brinquedos, sensores de presença e alarmes. Basicamente o que compoem o sistema interno do sensor SW18010P, é um sensor de vibração SW18010P propriamente dito um chip comparador de tensão LM393 e um potenciometro para ajustar a sensibilidade do sensor.

## Bibliotecas Utilizadas      

    Este sensor não utiliza blibliotecas em seu codigo entretanto nada impede que se necessario seja utilizadas algumas bibliotecas.

## Materiais Utilizados 

* Arduino (caso não funcione tente usar o modelo UNO, (iremos testar em outros modelos e em outros dispositivos e quando isso ocorrer esse arquivo será atualizado))

* Protoboard

* Leds ou Buzzer 

* Sensor de vibração SW18010P (Datasheet sensor: https://www.usinainfo.com.br/index.php?controller=attachment&id_attachment=78 , http://mikroshop.ch/pdf/SW18010.pdf  )

* cabo usb

* jumpers 

## Esquematico do Circuito 


![esquematico SW18010P](https://github.com/VisionSat-UTFPR/tutorial-teste-SW18010P/blob/master/img/esquematico%20SW18010.png)

Observe no programa que estamos lendo os valores das saídas A0 e D0 do módulo, e mostrando esses valores no serial monitor.

Para acionamento da porta 4, onde se encontra o Led , o programa verifica se o valor da saída D0 é diferente de 1 (1 = sem vibração) e, caso positivo, aciona a porta 4 por 5 segundos, retornando depois ao loop do programa e aguardando o próximo acionamento :


## Informações Relevantes Sobre o Sensor 


Possui em sua estrtura dois leds, um verde indicando que o modulo esta ligado (tensão de operação entre 3.3V e 5V), e outro vermelho que acende quando tem mudanças de estado na saida digital.

Na ausencia de vibração, a saida digital se mantera em estado Alto (HIGH) da mesma maneira que a saida analogica A0 (que pode ser mudada sem problema), mantem seu valor maximo, variando  a tensao com a movimentação do sensor

Como sugestão de utilização, vamos utilizar este sensor de vibração para acionar um buzzer  quando for detectada vibração, manter o buzzer ativo por 5 segundos, e depois deixar o módulo novamente em estado de espera.

No nosso caso iremos substituir o buzzer por um led vermelho, e tiraremos esse tempo de 5 segundos de espera ao qual ele fica ali aguardando. Dessa forma quando obtiver vibração ele ira acender o led vermelho caso atinja um determinado nivel de vibração, ou então ele se mantem apagado caso não ocorra vibração ou a vibração realizada não seja tão alta a ponto de fazer o led vermelho ser acionado.

O cilindro preto que muitas vezes acompanha o sensor é um sistema de mola, onde ao inferir uma vibração ao sensor a mola que sera vibrada fará o sensor de vibração captar os dados vindos da mola. DATASHEET MOLA ESTA MAIS A CIMA NO TUTORIAL.

 ![Sensor_Vibracao_SW18010P](https://github.com/VisionSat-UTFPR/tutorial-teste-SW18010P/blob/master/img/Sensor_Vibracao_SW18010P1.jpg)  

## OQUE TEM QUE APARECER QUANDO RODAR O CODIGO:

![valores do sensor](https://github.com/VisionSat-UTFPR/tutorial-teste-SW18010P/blob/master/img/VALORES_SENSOR_SW18010P.PNG)

Caso não aparecer isso verificar se está com o serial em 9600 e se está no terminal serial correto(COM alguma coisa ,testa todas mas normalmente é os numeros mais altos 3 4 5 ....)


## Informações uteis sobre o codigo:

O codigo está disponibilizado já no github assim só realizar o download dele 


O ajuste da sensibilidade do módulo é feito girando o potenciômetro para a esquerda (diminui a sensibilidade), ou para a direita (aumenta a sensibilidade).

## Consideração Finais 

Esse sensor não é muito preciso assim seria interessante encontrar outra tecnologia ou então usar um acelerometro para obter a vibração.