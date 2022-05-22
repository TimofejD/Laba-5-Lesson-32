
#ifndef CALLBACKS_H
#define	CALLBACKS_H

class ICallbacks
{
public:

    virtual void SpecialKeyboardCB(int Key, int x, int y) = 0;

    virtual void KeyboardCB(unsigned char Key, int x, int y) = 0;

    virtual void PassiveMouseCB(int x, int y) = 0;

    virtual void RenderSceneCB() = 0;

    virtual void IdleCB() = 0;
    
    virtual void MouseCB(int Button, int State, int x, int y) = 0;
};

#endif	/* I3DAPPLICATION_H */

