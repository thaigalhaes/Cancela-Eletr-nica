# Cancela Eletrônica com Sensor Ultrassônico e Servo Motor

Este projeto utiliza um **sensor ultrassônico (HC-SR04)** e um **servo motor** para controlar a abertura e o fechamento automático de uma **cancela eletrônica**. Ideal para aplicações como protótipos de portões de estacionamento, sistemas de controle de acesso ou entrada automatizada.

---

## Funcionalidades

- Mede a distância de um objeto usando um sensor ultrassônico.
- Abre a cancela automaticamente quando detecta aproximação (≤ 5 cm).
- Aguarda o objeto se afastar para fechar a cancela novamente.
- Automatização simples com Arduino, ideal para iniciantes em automação e robótica.

---

## Componentes Utilizados

| Componente             | Descrição                      |
|------------------------|--------------------------------|
| Arduino (UNO)          | Placa microcontroladora        |
| Sensor Ultrassônico    | HC-SR04                        |
| Servo Motor            | SG90 ou compatível             |
| Jumpers                | Cabos de conexão               |
| Protoboard             | Para montagem do circuito      |

---

## Conexões

| Componente     | Pino no Arduino |
|----------------|-----------------|
| Trigger (HC-SR04) | 12            |
| Echo (HC-SR04)    | 13            |
| Servo Motor       | 9             |

---

## Lógica do Código

1. O sensor lê a distância constantemente.
2. Quando a distância for menor ou igual a 5 cm, a cancela abre (servo gira para 120°).
3. Enquanto o objeto ainda estiver próximo, o servo permanece aberto.
4. Quando o objeto se afasta, após 3 segundos a cancela fecha (servo retorna para 0°).
5. O sistema volta a monitorar.

---

## Bibliotecas Necessárias

- [`Ultrasonic`](https://github.com/ErickSimoes/Ultrasonic)
- [`Servo`](https://www.arduino.cc/en/reference/servo)

---

## Resultado

<table>
  <tr>
    <td align="center"><strong>🔒 Cancela Fechada</strong></td>
    <td align="center"><strong>🔓 Cancela Aberta</strong></td>
  </tr>
  <tr>
    <td><img src="https://github.com/thaigalhaes/Cancela-Eletr-nica/blob/main/Cancela%20fechada%20.jpg" width="200"/></td>
    <td><img src="https://github.com/thaigalhaes/Cancela-Eletr-nica/blob/main/Cancela%20aberta.jpg" width="200"/></td>
  </tr>
</table>
