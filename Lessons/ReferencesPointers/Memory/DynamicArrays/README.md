## Динамические массивы

Динамическое выделение массивов позволяет задавать их длину во время выделения.
Однако C++ не предоставляет способ изменения длины массива, который уже был выделен.
Но это ограничение можно обойти, динамически выделеы новый массив, скопировав все элементы из старого, затем удалив старый массив. Однако этот сопоб нежелателен т.к. подвержен ошибкам.
Лучше использовать ветора (vector).