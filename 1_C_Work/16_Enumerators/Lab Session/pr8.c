enum state
{
    working =0,failed,freezed
};
enum state currstate = 2;

enum state findstate()
{
    return currstate;
}
int main()
{
    (findstate()==working)?printf("Working\n"):printf("NOt working\n");
}