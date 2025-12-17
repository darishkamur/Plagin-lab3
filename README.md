# triangle project

## Описание проекта
Данный проект представляет собой программу на языке C++.
Файл README.md был сгенерирован автоматически на основе структуры проекта
и комментариев в исходном коде.

## Структура проекта
- `tests/teststriangle.cpp`
- `src/triangle.cpp`
- `src/main.cpp`
- `src/triangle.h`

## Сборка проекта
```bash
mkdir build
cd build
cmake ..
make

## Запуск программы
```bash
./triangle project [параметры]

## Поддерживаемые параметры командной строки
- `--check` — параметр программы
- `--perimeter` — параметр программы

## Примеры использования
```bash
./triangle project --check
```bash
./triangle project --perimeter

## Тестирование
Для запуска тестов выполните команды:

```bash
cd tests
make
./tests


Примечания
Данный README был сгенерирован автоматически с помощью VS Code плагина.
