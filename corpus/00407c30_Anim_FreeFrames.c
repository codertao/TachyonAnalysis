
/* sweep */

void Anim_FreeFrames(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 8);
    do {
      OurFreeMem(*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0xb;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  OurFreeMem(*(undefined4 *)(param_1 + 0x50));
  OurFreeMem(*(undefined4 *)(param_1 + 0x24));
  OurFreeMem(*(undefined4 *)(param_1 + 0x1c));
  return;
}

