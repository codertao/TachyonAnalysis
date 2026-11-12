
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CRT */

undefined4 ___init_numeric(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  uVar1 = DAT_0056516a;
  if (DAT_00565140 == 0) {
    _free(DAT_005650b4);
    _free(DAT_005650b8);
    _free(DAT_005650bc);
    DAT_005650b4 = 0;
    DAT_005650b8 = 0;
    DAT_005650bc = 0;
    pvVar5 = _malloc(2);
    *(void **)PTR_PTR_005627e8 = pvVar5;
    if (*(int *)PTR_PTR_005627e8 != 0) {
      _strcpy(*(int *)PTR_PTR_005627e8,&DAT_00548004);
      pvVar5 = _malloc(2);
      *(void **)(PTR_PTR_005627e8 + 4) = pvVar5;
      if (*(undefined1 **)(PTR_PTR_005627e8 + 4) != (undefined1 *)0x0) {
        **(undefined1 **)(PTR_PTR_005627e8 + 4) = 0;
        pvVar5 = _malloc(2);
        *(void **)(PTR_PTR_005627e8 + 8) = pvVar5;
        if (*(undefined1 **)(PTR_PTR_005627e8 + 8) != (undefined1 *)0x0) {
          **(undefined1 **)(PTR_PTR_005627e8 + 8) = 0;
          DAT_00561468 = **(undefined1 **)PTR_PTR_005627e8;
          _DAT_0056146c = 1;
          return 0;
        }
      }
    }
  }
  else {
    iVar2 = ___getlocaleinfo(1,DAT_0056516a,0xe,&DAT_005650b4);
    iVar3 = ___getlocaleinfo(1,uVar1,0xf,&DAT_005650b8);
    iVar4 = ___getlocaleinfo(1,uVar1,0x10,&DAT_005650bc);
    _fix_grouping(DAT_005650bc);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(undefined **)PTR_PTR_005627e8 != &DAT_005627b0) {
        _free(*(undefined **)PTR_PTR_005627e8);
        _free(*(undefined4 *)(PTR_PTR_005627e8 + 4));
        _free(*(undefined4 *)(PTR_PTR_005627e8 + 8));
      }
      *(undefined4 *)PTR_PTR_005627e8 = DAT_005650b4;
      *(undefined4 *)(PTR_PTR_005627e8 + 4) = DAT_005650b8;
      *(undefined4 *)(PTR_PTR_005627e8 + 8) = DAT_005650bc;
      DAT_00561468 = **(undefined1 **)PTR_PTR_005627e8;
      _DAT_0056146c = 1;
      return 0;
    }
    _free(DAT_005650b4);
    _free(DAT_005650b8);
    _free(DAT_005650bc);
    DAT_005650b4 = 0;
    DAT_005650b8 = 0;
    DAT_005650bc = 0;
  }
  return 0xffffffff;
}

