
/* send message 0x1f {level} to every entity of the side with pool type 0xc/0x10 */

void Faction_SendLevel(uint *param_1,int param_2)

{
  code *pcVar1;
  
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 8)) {
    if ((((uint)*(byte *)(param_2 + 0xc2) == *param_1) &&
        (((*(short *)(param_2 + 0x76) == 0xc || (*(short *)(param_2 + 0x76) == 0x10)) &&
         (*(int *)(param_2 + 0x8c) != 0)))) &&
       (pcVar1 = *(code **)(*(int *)(param_2 + 0x8c) + 0x34), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_2,0x1f,param_1[1]);
    }
  }
  return;
}

