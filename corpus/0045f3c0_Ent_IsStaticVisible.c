
/* sweep: guess, desc +0x58 */

undefined4 Ent_IsStaticVisible(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x58), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,0x13,param_2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

