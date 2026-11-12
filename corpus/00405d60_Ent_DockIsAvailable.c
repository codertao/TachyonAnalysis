
/* sweep: desc slot +0x58 cmd 1 */

undefined4 Ent_DockIsAvailable(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x58);
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(param_1,1,0);
    return uVar2;
  }
  return 0;
}

