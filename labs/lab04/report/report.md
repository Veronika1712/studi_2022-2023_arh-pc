---
## Front matter
title: "Отчет по лабораторной работе №4"
subtitle: "Создание и процесс обработки программ на языке ассемблера NASM"
author: "Щербакова Вероника Владимировна НБИбд-03-22"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Освоить процедуры компиляции и сборки программ, написанных на ассем-
блере NASM.

# Задание
1. В каталоге ~/work/arch-pc/lab05 с помощью команды cp создайте копию
файла hello.asm с именем lab5.asm
2. С помощью любого текстового редактора внесите изменения в текст программы 
в файле lab5.asm так, чтобы вместо Hello world! на экран выводилась строка 
с вашими фамилией и именем.
3. Оттранслируйте полученный текст программы lab5.asm в объектный
файл. Выполните компоновку объектного файла и запустите получившийся исполняемый файл.
4. Скопируйте файлы hello.asm и lab5.asm в Ваш локальный репозиторий
в каталог ~/work/study/2022-2023/"Архитектура компьютера"/arch-pc/labs/lab05/. 
Загрузите файлы на Github.
# Теоретическое введение

# Выполнение лабораторной работы
1. Переходим в каталог:
![переход в каталог](image/лаб04(3).png){ #fig:001 width=90% }
2. Создаём текстовый файл с именем hello.asm:
![создание файла hello.asm](image/лаб04(4).png){ #fig:002 width=90% }
3. Открываем этот файл с помощью любого текстового редактора(например gedit) и вводим текст:
![открытый файл с текстом](image/лаб04(5).png){ #fig:003 width=90% }
![файл](image/лаб04(2)){ #fig:004 width=90% }
4. С помощью команды ls проверяем, что объектный файл,nasm -f elf hello.asm, создан с именем hello:
![обьектные файлы](image/лаб04(6).png){ #fig:005 width=90% }
5. Напишем команду nasm и проверяем создание файла:
![командная строка nasm](image/лаб04(7).png){ #fig:006 width=90% }
![проверка создания файла](image/лаб04(8).png){ #fig:007 width=90% }
6. Передаем объектный файл на обработку компоновщику и проверяем создание файла hello:
![обработка файла](image/лаб04(9).png){ #fig:008 width=90% }
![проверка создания файла](image/лаб04(10).png){ #fig:009 width=90% }
7. Формат командной строки LD(часть вывода):
![формат строки](image/лаб04(11).png){ #fig:010 width=90% }
8. Запускаем на выполнение созданный исполняемый файл, находящийся в текущем каталоге:
![запуск и вывод](image/лаб04(12).png){ #fig:011 width=90% }
9. В каталоге ~/work/arch-pc/lab05 с помощью команды cp создаём копию
файла hello.asm с именем lab5.asm
10. С помощью любого текстового редактора вносим изменения в текст про-
граммы в файле lab5.asm так, чтобы вместо Hello world! на экран выво-
дилась строка с  фамилией и именем выполнявшего лабораторнуб работу:
![заполнение данных](image/лаб04(14).png){ #fig:012 width=90% }
![вывод выполнявшего работу](image/лаб04(13).png){ #fig:013 width=90% }


# Выводы

Освоили процедуры компиляции и сборки программ, написанных на ассем-
блере NASM.

# Список литературы{.unnumbered}

::: {#refs}
:::
