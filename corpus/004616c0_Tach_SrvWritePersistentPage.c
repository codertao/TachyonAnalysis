
/* persistent-object page: list conn+0x128, total +0x124, acked +0x12c, page id +0x130 -> header
   u16[1..2] */

void * __cdecl Tach_SrvWritePersistentPage(TachConn *conn,vec3 *origin,void *out,short *hdr)

{
  int iVar1;
  int iVar2;
  SpED **ppSVar3;
  
  iVar1 = Tach_SrvPageSize(conn);
  hdr[2] = 0;
  if (conn->persistTotal == 0) {
    return out;
  }
  hdr[1] = conn->persistPageId;
  ppSVar3 = conn->persistList;
  iVar2 = conn->persistTotal - conn->persistAcked;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  hdr[2] = (short)iVar2;
  if (iVar2 < 1) {
    return out;
  }
  do {
    if (*ppSVar3 != (SpED *)0x0) {
      out = (void *)Tach_SrvWriteEntityRecordExt(*ppSVar3,origin,out);
      *hdr = *hdr + 1;
    }
    ppSVar3 = ppSVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return out;
}

