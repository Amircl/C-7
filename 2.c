#include <stdio.h>
#include <string.h>


int indexOf(char text[], char word[]) {
    int textLen = strlen(text);
    int wordLen = strlen(word);

    for (int i = 0; i <= textLen - wordLen; i++) {
        int match = 1;
        for (int j = 0; j < wordLen; j++) {
            if (text[i + j] != word[j]) {
                match = 0;
                break;    // Функция ищет подстроку `word` в строке `text` и возвращает индекс начала или -1
            }
        }
        if (match) {
            return i;  // Нашли слово, возвращаем индекс
        }
    }
    return -1;  // Не нашли
}

int main() {
    char sentence[] = "The cat sat on the mat";
    char word[] = "cat";

    int pos = indexOf(sentence, word);
    if (pos != -1) {
        printf("Слово \"%s\" найдено на позиции: %d\n", word, pos);  // Выведет позицию 4
    } else {
        printf("Слово \"%s\" не найдено.\n", word);
    }

    return 0;
}
