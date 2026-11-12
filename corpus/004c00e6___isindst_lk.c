
/* CRT */

bool __isindst_lk(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_00561894 != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_00561928) || (iVar2 != DAT_00561938)) {
      if (DAT_00564fc8 == 0) {
        _cvtdate(1,1,iVar2,4,1,0,0,2,0,0,0);
        _cvtdate(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_00565068 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_0056506e;
        }
        else {
          uVar4 = DAT_0056506c;
          uVar3 = DAT_0056506e;
          uVar5 = 0;
        }
        _cvtdate(1,DAT_00565068 == 0,iVar2,DAT_0056506a,uVar3,uVar4,uVar5,DAT_00565070,DAT_00565072,
                 DAT_00565074,DAT_00565076);
        if (DAT_00565014 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_0056501a;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_00565018;
          uVar3 = DAT_0056501a;
          uVar5 = 0;
        }
        _cvtdate(0,DAT_00565014 == 0,iVar2,DAT_00565016,uVar3,uVar4,uVar5,DAT_0056501c,DAT_0056501e,
                 DAT_00565020,DAT_00565022);
      }
    }
    iVar2 = param_1[7];
    if (DAT_0056192c < DAT_0056193c) {
      if ((DAT_0056192c <= iVar2) && (iVar2 <= DAT_0056193c)) {
        if ((DAT_0056192c < iVar2) && (iVar2 < DAT_0056193c)) {
          return true;
        }
LAB_004c025e:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_0056192c) {
          return DAT_00561930 <= iVar1;
        }
        return iVar1 < DAT_00561940;
      }
    }
    else {
      if (iVar2 < DAT_0056193c) {
        return true;
      }
      if (DAT_0056192c < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_0056193c) || (DAT_0056192c <= iVar2)) goto LAB_004c025e;
    }
  }
  return false;
}

