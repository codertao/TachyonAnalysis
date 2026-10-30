
undefined8 __fastcall FUN_004e4202(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 in_EAX;
  char cVar3;
  char cVar6;
  byte bVar7;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  do {
    uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),(char)((uint)iVar4 >> 8));
    do {
      iVar4 = (uVar5 & 0xff) * 3;
      iVar1 = (uVar5 >> 8) * 3;
      DAT_004e3004 = (&DAT_004e3067)
                     [(uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar1)] +
                      (uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar4)] >> 1];
      DAT_004e3005 = (&DAT_004e3067)
                     [(uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar1 + 1)] +
                      (uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar4 + 1)] >> 1];
      DAT_004e3006 = (&DAT_004e3067)
                     [(uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar1 + 2)] +
                      (uint)(byte)(&DAT_004e3267)[*(byte *)((int)&DAT_00603180 + iVar4 + 2)] >> 1];
      uVar2 = (*(code *)PTR_FUN_004e3053)();
      *(undefined1 *)(uVar5 + param_3) = uVar2;
      cVar6 = (char)(uVar5 >> 8);
      *(undefined1 *)((uint)CONCAT11((char)uVar5,cVar6) + param_3) = uVar2;
      cVar3 = (char)uVar5 + '\x01';
      uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar3);
    } while (cVar3 != '\0');
    bVar7 = cVar6 + 1;
    iVar4 = (uint)bVar7 << 8;
  } while (bVar7 != 0);
  return CONCAT44(param_2,in_EAX);
}

