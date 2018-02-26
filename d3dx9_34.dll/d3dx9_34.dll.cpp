#include "stdafx.h"
#include "ProxyLib.h"

using namespace proxylib;

// pSemantics is D3DXSEMANTIC*
HRESULT stub_D3DXGetShaderOutputSemantics(const DWORD *pFunction, void *pSemantics, UINT *pCount)
{
    return GetProxyLib()->D3DXGetShaderOutputSemantics(pFunction, pSemantics, pCount);
}

// ppBuffer is LPD3DXBUFFER*
HRESULT stub_D3DXCreateBuffer(DWORD NumBytes, void *ppBuffer)
{
    return GetProxyLib()->D3DXCreateBuffer(NumBytes, ppBuffer);
}

// pSemantics is D3DXSEMANTIC*
HRESULT stub_D3DXGetShaderInputSemantics(const DWORD *pFunction, void *pSemantics, UINT *pCount)
{
    return GetProxyLib()->D3DXGetShaderInputSemantics(pFunction, pSemantics, pCount);
}

// ppConstantTable is LPD3DXCONSTANTTABLE*
HRESULT stub_D3DXGetShaderConstantTable(const DWORD *pFunction, void *ppConstantTable)
{
    return GetProxyLib()->D3DXGetShaderConstantTable(pFunction, ppConstantTable);
}
