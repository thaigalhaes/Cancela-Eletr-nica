# Abertura Automática com Sensor Ultrassônico e Servo Motor

Este projeto utiliza um sensor ultrassônico (HC-SR04) e um servo motor para criar um sistema de abertura automática, ideal para portas, tampas ou sistemas de interação sem toque. Quando um objeto ou pessoa se aproxima do sensor a uma distância igual ou inferior a 5 cm, o servo é acionado, simulando a abertura automática.

---

## Funcionalidades

- Mede a distância de objetos usando um sensor ultrassônico.
- Aciona o servo motor automaticamente quando detecta proximidade.
- Retorna à posição inicial após a saída do objeto.
- Ideal para projetos de automação residencial, acessibilidade ou prototipagem.

---

## Componentes Utilizados

| Componente             | Descrição                |
|------------------------|--------------------------|
| Arduino (UNO/Nano/etc) | Placa microcontroladora  |
| Sensor Ultrassônico    | HC-SR04                  |
| Servo Motor            | SG90 ou compatível       |
| Jumpers                | Cabos de conexão         |
| Protoboard (opcional)  | Montagem do circuito     |

---

## Conexões

| Componente     | Pino no Arduino |
|----------------|-----------------|
| Trigger (HC-SR04) | 12            |
| Echo (HC-SR04)    | 13            |
| Servo Motor       | 9             |

---

## Lógica do Código

1. O sensor ultrassônico mede a distância constantemente.
2. Se a distância for **≤ 5 cm**, o servo gira para 120° (abrindo).
3. O sistema aguarda até que o objeto se afaste.
4. Após 3 segundos, o servo retorna para 0° (fechando).
5. O sistema reinicia o monitoramento.

---

## Bibliotecas Utilizadas

- [`Ultrasonic`](https://github.com/ErickSimoes/Ultrasonic)
- [`Servo`](https://www.arduino.cc/en/reference/servo)

---

## Resultado

Abaixo, imagens demonstrando o funcionamento da cancela automática com sensor de proximidade:

### 🔒 Cancela fechada (posição inicial)
![Cancela Fechada](https://github.com/thaigalhaes/Cancela-Eletr-nica/blob/main/Cancela%20fechada%20.jpg)

### 🔓 Cancela aberta (com detecção de presença)
![Cancela Aberta](https://github.com/thaigalhaes/Cancela-Eletr-nica/blob/main/Cancela%20aberta.jpg)





