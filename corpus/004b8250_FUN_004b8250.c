
void FUN_004b8250(void)

{
  int iVar1;
  int iVar2;
  
  FUN_004b81d0();
  do {
    while( true ) {
      iVar1 = FUN_004b9110(1);
      if (iVar1 != 0) {
        FUN_004b80e0(iVar1,DAT_006af568);
      }
      iVar2 = thunk_FUN_004aabb0();
      if (iVar2 == 0) break;
      FUN_004b80e0(iVar2,DAT_0055e420);
    }
  } while (iVar1 != 0);
  FUN_004b8210();
  return;
}

