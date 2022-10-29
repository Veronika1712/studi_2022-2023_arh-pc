---
## Front matter
title: "Архитектура компьютера"
subtitle: "Отчет лабораторная работа №2"
author: "Щербакова Вероника Владимировна НБИбд-03-22"

## Generic otions
lang: ru-RU
toc-title: "Отчет по 2 лабораторной"

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

Цель работы: изучить идеологию и применение средств контроля версий. Приобрести практические навыки по работе с системой git.

# Задание

1. Создайте отчет по выполнению лабораторной работы в соответствующем
каталоге рабочего пространства (labs>lab03>report).
2. Скопируйте отчеты по выполнению предыдущих лабораторных работ в
соответствующие каталоги созданного рабочего пространства.
3. Загрузите файлы на github.

# Теоретическое введение


# Выполнение лабораторной работы

1. Создаем учетную запись на сайте GitHub и вводим нужные данные.
2. Откроем терминал и введём команды, указав имя и email владельца репозитория:
![терминал](image/ЛР2(1)){ #fig:001 width=90% }
3. Настроим utf-8 в выводе сообщений git:
![терминал](image/ЛР2(2)){ #fig:001 width=90% }
4. Зададим имя начальной ветки под названием  master, параметры autocrlf и safecrlf:
![терминал](image/ЛР2(3)){ #fig:001 width=90% }
5. Создание SSH ключа; Для последующей идентификации пользователя на сервере репозиториев необходимо сгенерировать пару ключей (приватный и открытый):
![терминал](image/ЛР2(4)){ #fig:001 width=90% }
![терминал](image/ЛР2(5)){ #fig:001 width=90% }
6. Загружаем сгенерированный ключ:
![терминал](image/ЛР2(6)){ #fig:001 width=90% }
7. Сознание рабочего пространства и репозитория курса на основе шаблона; При выполнении лабораторных работ следует придерживаться структуры рабочего пространства. Рабочее пространство по предмету располагается в следующей иерархии:
![терминал](image/ЛР2(7)){ #fig:001 width=90% }
8. Создаём каталог для предмета «Архитектура компьютера» через терминал:
![терминал](image/ЛР2(8)){ #fig:001 width=90% }
9. Создание репозитория курса на основе шаблона; Создаем репозиторий на основе шаблона  через web-интерфейс GitHub:
![терминал](image/ЛР2(9)){ #fig:001 width=90% }
10. Название репозитория: 
![терминал](image/ЛР2(10)){ #fig:001 width=90% }
11. Открываем терминал и перейдём в каталог курса, клонируйте созданный репозиторий:
![терминал](image/ЛР2(11)){ #fig:001 width=90% }
![терминал](image/ЛР2(12)){ #fig:001 width=90% }
12. Настройка каталога курса;Процесс настройки:
![терминал](image/ЛР2(13)){ #fig:001 width=90% }
13. Проверяем правильность создания иерархии рабочего пространства в локальном репозитории и на странице GitHub:
![терминал](image/ЛР2(14)){ #fig:001 width=90% }
# Выводы

Вывод: Я изучила идеологию и применение средств контроля версий.
Приобрела практические навыки по работе с системой git.
# Список литературы{.unnumbered}

::: {#refs}
:::
