
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c330(void)

{
  undefined4 uVar1;
  int iVar2;
  
  DAT_005b2808 = DAT_005b9600 + -0x80000;
  DAT_005b280c = DAT_005b9604 + -0x80000;
  DAT_005b2810 = DAT_005b9608 + -0x80000;
  _DAT_005b2814 = DAT_005b9600 + 0x80000;
  _DAT_005b2818 = DAT_005b9604 + 0x80000;
  _DAT_005b281c = DAT_005b9608 + 0x80000;
  iVar2 = 0x3c;
  do {
    uVar1 = FUN_0041b790(&DAT_005b27c4,6,&DAT_005b31c0);
    FUN_0041c2f0(uVar1);
    FUN_0041b850(uVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  DAT_005b27f0 = DAT_005b3304;
  DAT_005b27f4 = 0;
  DAT_005b27f8 = 0x4000;
  DAT_005b27fc = 0;
  DAT_005b2800 = 0;
  DAT_005b2804 = 0;
  return;
}

