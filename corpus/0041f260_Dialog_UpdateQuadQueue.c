
/* sweep */

void Dialog_UpdateQuadQueue(int param_1)

{
  Pool *pool;
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_18;
  SpED *local_14;
  undefined4 local_10;
  SpED *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pool = *(Pool **)(param_1 + 0x5c);
  if (pool[1].freeHead == (void *)0x0) {
    pvVar3 = pool[1].mem;
    if (pvVar3 != (void *)0x0) {
      iVar1 = *(int *)((int)pvVar3 + 0x18);
      iVar2 = *(int *)((int)pvVar3 + 0x1c);
      if (((*(byte *)(iVar1 + 0x58) & 1) != 0) && (*(int *)(iVar1 + 0x6c) == 0)) {
        Dialog_FlushQuadQueue(pool,param_1);
        return;
      }
      uVar4 = File_SetErrorFlag(0);
      Timer_PauseBegin();
      iVar5 = Audio_Call8c(iVar2 + 0x10,0x10000);
      pool[1].freeHead =
           (void *)(((iVar5 * 0x19 & 0x7fffffffU) >> 0xf) + 0x19 + *(int *)((int)pvVar3 + 0x20));
      Timer_PauseEnd();
      File_SetErrorFlag(uVar4);
      if (*(int *)(iVar1 + 0x6c) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x78);
      }
      SrvSend_PlayNamedSound(iVar1 + 0x10,iVar2,0,uVar4,param_1);
      *(undefined4 *)&pool[1].field_0x8 = *(undefined4 *)((int)pvVar3 + 0x24);
      pool[1].pending = *(SpED **)((int)pvVar3 + 0x28);
      pool[1].killList = *(SpED **)((int)pvVar3 + 0x2c);
      List_Remove(pvVar3,&pool[1].mem);
      Pool_Free(pool,pvVar3);
    }
  }
  else {
    pvVar3 = (void *)((int)pool[1].freeHead + -1);
    pool[1].freeHead = pvVar3;
    if ((pvVar3 == (void *)0x0) && (*(int *)&pool[1].field_0x8 != 0)) {
      local_14 = pool[1].pending;
      local_c = pool[1].killList;
      local_8 = 0xffffffff;
      local_4 = 0xffffffff;
      local_18 = 7;
      local_10 = 0;
      Mission_PostEvent(&local_18,param_1);
      *(undefined4 *)&pool[1].field_0x8 = 0;
      return;
    }
  }
  return;
}

