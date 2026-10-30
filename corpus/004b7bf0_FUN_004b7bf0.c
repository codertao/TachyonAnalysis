
void FUN_004b7bf0(void)

{
  int iVar1;
  undefined4 local_4;
  
  DAT_006af664 = DAT_006af664 + 1;
  if (DAT_006af6f0 <= DAT_006af664) {
    DAT_006af6f0 = DAT_006af664;
  }
  iVar1 = FUN_004b79d0(&local_4);
  FUN_004b7ac0(iVar1,local_4);
  if (DAT_006af7b4 != (code *)0x0) {
    (*DAT_006af7b4)(iVar1,DAT_0055e42c,DAT_0055e430);
  }
  *(undefined1 *)(iVar1 + 0x88) = 1;
  *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0x8c) + 1;
  return;
}

