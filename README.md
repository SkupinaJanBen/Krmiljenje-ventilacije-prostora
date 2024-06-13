# Krmiljenje-ventilacije-prostora
## Navodila
Ob vklopu stikala 1 naj se ventilacija (motorček preko tranzistorja) vključi in obratno. Način delovanja ventilacije pa lahko izbiramo s stikalom 2, in sicer: AVTOMATSKO delovanje glede na višino temperature (višja temperatura - hitrejše vrtenje ventilatorja - uporabite termistor) ter ROČNO upravljanje z zveznim spreminjanjem hitrosti ventilatorja (s potenciometrom). Za preklop med avtomatskim in ročnim delovanjem uporabite stikalo 2; ob izklopu stikala 2 naj deluje ventilacija ročno, sicer pa avtomatsko. Poleg tega dodajte še LED diodi: Rdeča za signalizacijo ROČNO in zelena za AVTOMATSKO. Ob izklopu ventilacije se izklopita obe LED.

## Kosovnica
|     Element       |   Količina     |
|-------------------|:---------------|
|  LED rdeča        |    X 1         |         
|  LED zelena       |    X 1         |         
|  Potenciometer    |    X 1         |         
|  Protobord        |    X 1         |    
|  Termistor        |    X 1         |
|  Upor  1 kΩ       |    X 1         |
|  Upor  220 Ω      |    X 1         |
|  Upor  18 kΩ      |    X 1         |
|  Upor  10 kΩ      |    X 1         |
|  Arduino UNO      |    X 1         |
|  NPN Tranzistor   |    X 1         |
|  12V DC Motor     |    X 1         |
|  side switch      |    X 2         |


## Priredbeni seznam
### Vhodi
|     Oznaka v načrtu      |   Operenda     |   Vrste kontakta   |   Pomen    |   
|-------------|:--------------|:--------------------|:------------------|
|  SW1        |    I4         |    Menjalni         |   Vklop/Izklop ventilatorja       |        
|  SW2        |    I3         |    Menjalni         |   Ročno/Avtomatsko vpravljanje hitrosti ventilatorja      |            
|  RP1        |    A1         |    Analogni         |   Meri vrednost na analognem pinu A1        |            
|  NTC1       |    A0         |    Analogni         |   Meri vrednost na analognem pinu A0        |   


### Izhodi
|     Oznaka v načrtu      |   Operenda     |   Aktiven pri   |   Pomen    |   
|-------------|:--------------|:--------------------|:------------------|
|  LED1       |    O2         |    1         |    Indikira če ventilator deluje v avtomatskem načinu      |        
|  LED2       |    O6         |    1         |    Indikira če ventilator deluje v avtomatskem načinu       |            
|  Q1         |    O5         |    1         |    Nadzira hitrost vrtenja ventilatorja        |                



## Slika vezalne sheme
![Vezje PNA J](https://github.com/SkupinaJanBen/Krmiljenje-ventilacije-prostora/assets/171671326/ad7c515a-6d1a-403d-acbe-4c6d96e60a2e)


## Slika vezave
![IMG_20240611_091513 22](https://github.com/SkupinaJanBen/Krmiljenje-ventilacije-prostora/assets/171671326/16601ab5-b801-4eaa-a215-46586464c80d)

## Koda za Arduino

Koda se nahaja v mapi __vsebina__ ali pa pritisnite na vezavo [tukaj](https://github.com/SkupinaJanBen/Krmiljenje-ventilacije-prostora/blob/main/vsebina/JanUBenMpnakoda.ino).

## Video 
https://github.com/SkupinaJanBen/Krmiljenje-ventilacije-prostora/assets/171671326/639c3577-71b4-42cb-927b-54842eeeed50

## Komentar
izdelek deluje zelo dobro z manjšimi napakami in to lahko tudi vidimo v video pisnetku. Pri delu sva naletela na napake kot so premajhen upor na diodi. Izdelek bi lahko izboljšala še tako da bi dodala ohišje, lahko bi tudi izboljšala delovanje na avto nastavitvi.
lahko bi dodala bluetooth module in s tem upravljala hitrost ventilatorja.



