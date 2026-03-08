int main() {
    string_view sv = "Hello world and good bye";
    const char delimiter = ' ';
    string_view token;
    while (NextToken(sv, delimiter, token)) {
        // обрабатываем очередной token
        // например, печатаем его на экране:
        cout << token << "\n";
    }
}

// должно получиться такое:
// Hello
// world
// and
// good
// bye