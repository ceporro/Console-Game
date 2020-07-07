#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        //virtual ~Player();

        void CallInput();
        void resetToSafePos();
        void resetToIni();

        int x, y;

        int lastX, lastY;

    protected:


    private:
};

#endif // PLAYER_H
