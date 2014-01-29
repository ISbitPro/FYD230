FYD230 - Microkontrollers i nätverk
======

Delade lösningar till uppgifterna i kursen. Detta repo innehåller inget upphovsrättsskyddat material utan enbart egenhändigt skapade, fristående lösningar.

## Ladda ner projektfilerna
Givet att du har git installerat på din dator kan du ladda ner filerna med följande kommando:
```
git clone https://github.com/fuzzer89/FYD230.git
```

## Uppgifter
**Typ:** För betyg VG krävs alla G-uppgifter, 6 st VG-uppgifter och 2 projektuppgifter. Sista redovisningsdag 19/3-14.
**Ansvar:** Personen ansvarar för att skriva ett första utkast till programmet, båda hjälper förstås till att buggsöka och ger feedback på programmet. Uppgifterna är tilldelade varannan person, underuppgifter tilldelas samma person.
**Status:** *- / Skriven / Buggfix / Redovisad*

Nummer        | Typ  | Ansv. | Status       | Kommentar
------------- | ---- | ----- | ------------ | ------------
17.1a | G  | F | Redovisad    | Skicka AD-läsning till terminal via RS232
17.1b | G  | F | Buggfix      | Läsa RS232 och blinka diod vid rätt knapptryckning
17.1c | VG | F | - | Pinkod för att tända diod
17.2  | VG | M | - | Program som plottar genom inläsning från COM-port
17.3a | VG | F | - | AD-DA genom 2 st 458:or
17.3b | VG | F | - |
17.4  | VG | M | - | Som 17.3 men med jämn paritetsbit (beräknas)
17.5  | VG | F | - | Mottagaren ska kontrollera paritetsbit och indikera fel med diod
17.6  | VG | M | - | 17.3 fast med trådlös överföring via nRF401
18.1  |  G | F | - | SPI till MAX548, generera rampfunktion
18.2  |  G | M | - | Sinusvåg
18.3  | VG | F | - | Använd MCP3202
19.2  |  G | M | - | I2C, skriv AD-värde till 8574-kretsen, den ska lägga upp värdet binärt på dioder
19.3  |  G | F | - | I2C, binärswitchar på 8574, PWM:a motsvarande på 458:an
19.5  | VG | M | - | Koppla 2 PIC-kretsar med I2C
19.7  | VG | F | - | SmartCard-programmering
19.8  | VG | M | - | Läs och verifiera SmartCard-kortet
20.1  |  G | F | - | CAN med 2551, tänd dioder och kommunicera
20.2  |  G | M | - | Lägg till ytterligare nod
20.3  |  G | F | - | AD-DA med CAN
20.4  | VG | M | - | AD-DA med 1 input controller och 2 output controller
20.5  | VG | F | - | AD-DA med 2 input/outpus som lägger ut varandras värden
20.6  | VG | M | - | Switchar och dioder kopplade mellan olika controller på CAN
20.7  | VG | F | - | CAN som emulerar blinkerssystem i en bil
20.8  | VG | M | - | Distribuerat sensorsystem, visa värdena på en HDSP-2112
21.1  | VG | F | - | Läs av en RF-tag
21.2  | VG | M | - | Proximity sensor som tänder en diod om rätt bricka kommer i närheten
