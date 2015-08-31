#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

string verb;

bool wanna_play_game = true;

vector <string>
                action_start{"Анус твой от","Ебало тебе пере",   // начало
                            "Ебало тебе от ","Анус твой пере"} , // действия

                action_end{" щас"," нахуй"," блять",             //окончание
                           " сука"," пидор"," гондон",           //действия
                           " чмо" ," уебок"} ,

                random_phrases{"ака, ака, ака 47!!!!",           //прост)))
                               "Планы на осень не сесть по 228",
                               "Продолжай играть !!",
                               "Сотка на кармане на ягу и петра пачку, и рубль на жевачку ГЫГЫ",
                               "Чо? Чо? Традиционный напиток",
                               "Ехали взрывать Сургут, взорвали всю Россию",
                               "Брат!!!",
                               "Сасай кудасай",
                               "Ака в полном составе, атакует екб",
                               "Витя ака"
                               "Бастас рекордс",
                               "Витя",
                               "Иди сюда слышь",
                               "Витя и максим",
                               "По встречке валят тазы Нормальные пацаны",
                               "Бпан",
                               "Питух",
                               "Пацанский расклад"
                               "В эту игру можно играть бесконечно!"
                               "Русский значит трезвый! Смерть ягуару"};


void verb_1fc_1sp(){ //глаголы 1го лица 1го спряжения
    cout<<action_start[rand() % action_start.size() ]<<verb<<action_end[rand()%action_end.size() ]<<endl;

}

void verb_end(){//определяет окончание глагола, вызывает нужные функции в зависимости от окончания
    int verb_end_length=1;
    if(verb.substr(verb.length()-verb_end_length,verb_end_length) == "у"  ||
       verb.substr(verb.length()-verb_end_length,verb_end_length) == "ю" ) verb_1fc_1sp();
}

void end_game(){ //завершение игры
    cout<<"Press any key, then press Enter, then иди нахуй";
    cin.get();
    cin.get();
}

void random_phrase(){ // выводит рандомные фразы из ветора random_phrases во время игры
    int true_or_false = rand()%2;
    if(true_or_false) cout<<endl<<random_phrases[rand()%random_phrases.size()]<<endl;
}

void play_game(){ //игра

    random_phrase();

    cout << "Введите глагол епты:" << endl;

    cin>>verb;

    while(verb == "епты"){ cout<<"Ты дебил? Глагол введи"<<endl; cin>>verb;}

    verb_end();

    random_phrase();

    cout<<"Хочешь еще? Напиши <<1>> !!!"<<endl;

    random_phrase();

    string wanna; //продолжить игру или нет?

    cin>> wanna;

    if( wanna ==  "1"){ cout<<endl; play_game();}

    else end_game();
}

int main(){
    srand (time(NULL)); //чтобы rand() работал
    play_game();
    return 0;
}
