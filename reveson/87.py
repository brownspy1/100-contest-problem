import asyncio

async def fake_api(value):
    await asyncio.sleep(1)
    result = f"Get: {value}"
    return result
async def main():
    value = int(input())
    result = await fake_api(value)
    print(result)
if __name__ == '__main__':
    asyncio.run(main())