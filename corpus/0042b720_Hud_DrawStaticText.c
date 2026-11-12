
/* sweep */

void Hud_DrawStaticText(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      Hud_DrawStringId(*puVar1,puVar1[3],puVar1[1],puVar1[2],puVar1[6],0,puVar1[5]);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 7;
    } while (uVar2 < *(uint *)(param_1 + 0x18));
  }
  return;
}

