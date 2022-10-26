---
## Front matter
title: "Архитектура компьютера"
subtitle: "Отчет по лабораторной работа №3"
author: "Щербакова Вероника Владимировна"

## Generic otions
lang: ru-RU
toc-title: "Отчет по 3 лабораторной"

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

Освоить процедуры оформления отчетов с помощью легковесного языка разметки Markdown.


# Задание

1. В соответствующем каталоге сделайте отчёт по лабораторной работе No 3
в формате Markdown. В качестве отчёта необходимо предоставить отчёты
в 3 форматах: pdf, docx и md.
2. Загрузите файлы на github.

# Теоретическое введение

# Выполнение лабораторной работы

1. Открываем терминал и переходим в каталог курса сформированный при выполнении лабораторной работы №3:
![терминал](image/ЛР03(1).png){ #fig:001 width=90%}
2. Обновляем локальный репозиторий, скачав изменения из удаленного репозитория с помощью команды - git pull:
![терминал](image/ЛР03(2).png){ #fig:001 width=90%}
3. Переходим в каталог с шаблоном отчета по лабораторной работе № 3:
4. Проводим компиляцию шаблона с использованием Makefile с помощью команды make; При успешной компиляции должны сгенерироваться файлы report.pdf и report.docx. Открываем и проверяем корректность полученных файлов:
![терминал](image/ЛР03(3-4).png){ #fig:001 width=90%}
5. Удаляем полученные файлы с использованием Makefile командой make klean и проверяем что они действительно удалены:
![терминал](image/ЛР03(5).png){ #fig:001 width=90%}
6. Откроем файл report.md c помощью любого текстового редактора, например gedit:
![терминал](image/ЛР03(6).png){ #fig:001 width=90%}
7. Заполним отчет и скомпилируем отчет с использованием Makefile. Проверим корректность полученных файлов:

8. Загрузим файлы на Github.
 
# Выводы
Освоили процедуры оформления отчетов с помощью легковесного языка разметки Markdown.

::: {#refs}
:::
