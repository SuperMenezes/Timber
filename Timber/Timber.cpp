// TimberL.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

//#include "stdafx.h"
#include <SFML/Graphics.hpp>

using namespace sf; 
int main()
{
    /*SCREEN SETUP*/
    //Video Mode
    VideoMode vm(1920, 1080);
    //Create and open window
    RenderWindow window(vm, "Timber!", Style::Resize);
    /*
    /*GRAPHICS SETUP*/
    
        //Background
        Texture tBackground;
        tBackground.loadFromFile("Graphics/background.png");
        //Sprite
        Sprite sBackground;
        sBackground.setTexture(tBackground);
        sBackground.setPosition(0, 0);
    
    while (window.isOpen())
    {
        /*Player Input*/
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        /*Scene Update*/

        /*Scene Draw*/
            //Clear last frame
            window.clear();

            //Draw current frame
            window.draw(sBackground);

            //Display current frame
            window.display();
    }

    return 0;
}