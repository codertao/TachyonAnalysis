
void FUN_0047abe0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  iVar2 = DAT_0056367c;
  do {
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0x98) == 0) {
      uVar5 = 0x61;
      do {
        str_sprintf(&DAT_005a41e0,iVar2 + 0x20,(int)(char)uVar5);
        Var_GetInt(g_GameVarStore,iVar2 + 0x40,&DAT_005a41e0,(int *)(iVar2 + 0x98));
        if (*(int *)(iVar2 + 0x98) != 0) goto LAB_0047ac49;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x7a);
    }
    else {
LAB_0047ac49:
      iVar3 = FUN_0047a830(iVar2 + 0x60);
      if (iVar3 != 0) {
        str_sprintf(&DAT_005a41e0,s__s__s_005525f8,iVar2 + 0x40,iVar2);
        local_8 = (int)(longlong)
                       ROUND((float)(*(int *)(iVar3 + 0x54) >> 1) * *(float *)(iVar3 + 0x5c));
        iVar1 = *(int *)(iVar2 + 0x84) + local_8;
        iVar4 = *(int *)(iVar2 + 0x84) - local_8;
        local_8 = (int)(longlong)
                       ROUND((float)(*(int *)(iVar3 + 0x48) >> 1) * *(float *)(iVar3 + 0x5c));
        FUN_0047ab20(&DAT_005a41e0,*(int *)(iVar2 + 0x80) - local_8,iVar4,
                     *(int *)(iVar2 + 0x80) + local_8,iVar1,1,iVar2);
      }
    }
    iVar2 = *(int *)(iVar2 + 0x9c);
  } while( true );
}

