
void FUN_0045c5b0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc);
      do {
        OurFreeMem(*puVar1);
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 0x11;
      } while (uVar2 < *(uint *)(param_1 + 0x28));
    }
    OurFreeMem(*(undefined4 *)(param_1 + 0x9c));
    OurFreeMem(*(undefined4 *)(param_1 + 0x88));
    OurFreeMem(*(undefined4 *)(param_1 + 0x84));
    OurFreeMem(*(undefined4 *)(param_1 + 0x80));
    OurFreeMem(*(undefined4 *)(param_1 + 0x90));
    OurFreeMem(*(undefined4 *)(param_1 + 0x94));
    OurFreeMem(*(undefined4 *)(param_1 + 0xc));
    OurFreeMem(*(undefined4 *)(param_1 + 8));
    OurFreeMem(*(undefined4 *)(param_1 + 4));
    OurFreeMem(*(undefined4 *)(param_1 + 0x2c));
    OurFreeMem(*(undefined4 *)(param_1 + 0x24));
    OurFreeMem(*(undefined4 *)(param_1 + 0x78));
    OurFreeMem(param_1);
  }
  return;
}

