#include "stepping_motor.h"

void Angle_Contor(int32_t pluse)
{
    if (pluse < 0)
    {
        pluse = -pluse;
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
        PWM_Output(pluse);
        return;
    }
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
    PWM_Output(pluse);
    return;
}
