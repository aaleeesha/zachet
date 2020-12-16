#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>


class GodOfWar {
private:// доступ из основной функии не доступен
    std::string name = " Кратос ";
    double weight = 105;
    double 186;
    std::string age = "не известен, точно больше 100 лет.";
    std::string son = "Атрей, известного в скандинавской мифологии больше как бог лжи Локи.\n\n\n";
public: // доступ в подобном роде имеют все
    GodOfWar() { std::cout << "\t\t\tВызвался конструктор\n " << this << std::endl; }// пустой конструктор потому что по заданию пустой ;(
    GodOfWar(GodOfWar const& another_GodOfWAr) {} // копирующий конструктор, так как основной конструктор пустой-то и этот пустой

    void History(std::string qua) {
        std::cout << "\t\t\t\tВызван метод History\n" << std::endl;
        std::cout << "\t\t\tНебольшой экскурс в историю серии игра GOD OF WAR.\n\n\nГлавный протагонист серии игр God of War. Кратос впервые появился в видеоигре God of War, выпущенной в 2005 году. В этой игре Кратос начинает свой путь к мести, который он продолжит в последующих играх серии. God of War стала одной из самых важных игр для игровых систем PlayStation.\n\n\n" << std::endl;
        std::cout << "\t\t\t\t ВВедите (Да) если готовы продолжать\n" << std::endl;
        std::cin >> qua;
        if (qua == "Да") {
        }
    }
    void excess_weight(std::string qua) {
        std::cout << "\t\t\t\tВызван метод excess_weight\n" << std::endl;
        std::cout << "\t\t\tПосчитаем ожирение Кратоса!\nЕго процент ожирения равен = " << (weight / growht) << "% что равно 4-ой стадии ( на самом деле у него кость широкая и она раскаченный малый" << std::endl;
        std::cout << "\t\t\t\t ВВедите (Да) если готовы продолжать\n" << std::endl;
        std::cin >> qua;
        if (qua == "Да") {
        }
    }
    void shorty_information(std::string qua) {
        std::cout << "\t\t\t\tВызван метод shorty_information\n" << std::endl;
        std::cout << "\t\t\tКраткая справка о главном героии серии God of War.\n\n\nИмя главног героя God of war = " << name << "\nЕго рост = " << growht << " сантиметров \nЕго вес = " << weight << " килогарамм \n Его рост " << age << " \nЕщё у этого чудика есть сын = " << son << std::endl;
        std::cout << "\t\t\t\t ВВедите (Да) если готовы продолжать\n" << std::endl;
        std::cin >> qua;
        if (qua == "Да") {
        }
    }
    void IMPORTANT_CALL_HER(std::string game, std::string kill, std::string qua) {
        std::cout << "\t\t\t\tВызван метод IMPORTANT_CALL_HER\n" << std::endl;
        std::cout << "\t\t\tНебольшой тестик,пройди!\n\n\nКак вы относитесь к играм? (пишите с заглавной буквы)" << std::endl;
        std::cin >> game;
        if ((game == "Нравится") || (game == "Игроман") || (game == "Играю переодически") || (game == "Геймер") || (game == "Жизни без них не представляю") || (game == "Люблю")) {
            std::cout << " Тебе понравится эта серия игр, пройти, сюжет охонь, или, посмотри прохождения." << std::endl;
        }
        else {
            std::cout << "Ну, попробуй поиграть, может быть всё-таки понравятся игры." << std::endl;
        }
        std::cout << "Как вы относитесь к убийствам в играх? (пишите с заглавной буквы (нормально/не приемлимо))" << std::endl;
        std::cin >> kill;
        if (kill == "Нормально") {
            std::cout << "Тогда тебе точно надо познакомиться с этой серией" << std::endl;
        }
        else {
            std::cout << "Ладно, тогда не играй, но всё же полазь по другим методам этого класса позязя :(." << std::endl;
        }
        std::cout << "\t\t\t\t ВВедите (Да) если готовы продолжать\n" << std::endl;
        std::cin >> qua;
        if (qua == "Да") {
        }
    }
    void Big_survey(std::string name, std::string old, std::string name2, std::string Sony, int& ball, std::string qua) {
        std::cout << "\t\t\t\tВызван метод Big_survey\n" << std::endl;
        std::cout << "\t\t\tБольшой тестик, попытайся пройти,ахахаххах!\n\n\nТебе предстоит пройти небольшой опросик по поводу того, что я рассказывал в методах История и краткой информации" << std::endl;
        std::cout << "Как зовут Героя?(БУКВУ СОБЛЮДАЙ БОЛЬШУЮ букву)" << std::endl;
        std::cin >> name;
        if (name == "Кратос") {
            std::cout << "Красатуля.Сколько ему лет?? (- /100)" < ;
        }
        else {
            std::cout << "А вот всё, а вот надо было читать внимательнее.Сколько ему лет?? (- /100)" < ;
        }
        std::cin >> old;
        if (old == "-") {
            std::cout << "Даю тебе воображаемую пятюню.Кто его сын (по мифологии)?" << std::endl;
        }
        else {
            std::cout << "Минус ещё балл.Кто его сын (по мифологии)?" << std::endl;
        }
        std::cin >> name2;
        if (name2 == "Локи") {
            std::cout << "Да вообще просто лучший.На какой платформе эта игра базируется (Соня/Бокс/ПК-боярь)?" << std::endl;
        }
        else {
            std::cout << "Неповезло... (На какой платформе эта игра базируется (Соня/Бокс/ПК-боярь)?" << std::endl;
        }
        std::cin >> Sony;
        if (Sony == "Соня") {
            std::cout << "Лучший, просто 10/10.Ты очень классно читаешь и запоминаешь, у меня на этом всё." << std::endl;
        }
        else {
            std::cout << "Опять неудача." << std::endl;
        }
        std::cout << "Введи количество правильных ответов " << std::endl;
        std::cin >> ball;
        switch (ball) {
        case  1:
            std::cout << "Честно говоря - не очень " << std::endl;
            break;
        case 2:
            std::cout << "Не дотягиваешь до хорошего читателя" << std::endl;
            break;
        case 3:
            std::cout << "Хороший читатель" << std::endl;
            break;
        case 4:
            std::cout << "Лучший в деле чтения и запоминания данных" << std::endl;
            break;
        default:std::cout << "Error 404 ты что-то не то ввёл" << std::endl;
            break;
        }
        std::cout << "\t\t\t\t ВВедите (Да) если готовы продолжать\n" << std::endl;
        std::cin >> qua;
        if (qua == "Да") {
        }
    }
    ~GodOfWar() { std::cout << "\t\t\tВызвался деструктор\n" << this << std::endl; }

};
void foo_class() {
    std::cout << "\t\t\t\t\t\t\tВызвана функция foo_class\n" << std::endl;
    std::string qua;
    std::string game;
    std::string kill;
    std::string name;
    std::string old;
    std::string name2;
    std::string Sony;
    int ball;
    GodOfWar game1;
    game1.History(qua);
    game1.shorty_information(qua);
    game1.excess_weight(qua);
    game1.IMPORTANT_CALL_HER(game, kill, qua);
    game1.Big_survey(name, old, name2, Sony, ball, qua);
    GodOfWar* game2;
    game2 = new GodOfWar;
    game2->History(qua);
    game2->shorty_information(qua);
    game2->excess_weight(qua);
    game2->IMPORTANT_CALL_HER(game, kill, qua);
    game2->Big_survey(name, old, name2, Sony, ball, qua);

}


int main()
{

    setlocale(LC_ALL, "Russian");
    std::cout << "\t\t\t\t\t\t\tЛабороторная 6.Классы\n" << std::endl;
    std::string qua;
    std::string game;
    std::string kill;
    std::string name;
    std::string old;
    std::string name2;
    std::string Sony;
    int ball;
    GodOfWar game1;
    game1.History(qua);
    game1.shorty_information(qua);
    game1.excess_weight(qua);
    game1.IMPORTANT_CALL_HER(game, kill, qua);
    game1.Big_survey(name, old, name2, Sony, ball, qua);
    GodOfWar* game2;
    game2 = new GodOfWar;
    game2->History(qua);
    game2->shorty_information(qua);
    game2->excess_weight(qua);
    game2->IMPORTANT_CALL_HER(game, kill, qua);
    game2->Big_survey(name, old, name2, Sony, ball, qua);
    foo_class();
    system("pause");
    return 0;
}