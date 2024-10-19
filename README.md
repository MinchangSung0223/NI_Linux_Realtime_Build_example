# NI_Linux_Realtime_Build_example

[참고 사이트] https://nilrt-docs.ni.com/cross_compile/config_dev_system.html

## 1. Cross compile을 위한 Compiler다운로드 ( x64 기준)
### 1.1 NI 소프트웨어-- GNU C& C++ Compile Tools x64 다운로드
``` bash
    https://www.ni.com/en-us/support/downloads/software-products/download.gnu-c---c---compile-tools-x64.html#477802
```
![image](https://github.com/user-attachments/assets/bf2052c1-689a-4708-8790-1c77327e385f)

버전은 CompactRio버전에 알맞게 선택 필요. CompactRio 9030기준 2018-2019 선택.

### 1.2 툴체인 설치
1. Open a terminal and navigate to the directory where the toolchain was downloaded.
2. 다운 받은 툴체인파일의 권한을 +x로 변경( root rwx user r-x gest r-x)
```bash
    chmod +x oecore-x86_64-core2-64-toolchain-6.0.sh
```
3. 툴체인 설치
```bash
   sudo ./oecore-x86_64-core2-64-toolchain-6.0.sh
```
4. PATH설정
```bash
    echo 'export PATH="$PATH:/usr/local/oecore-x86_64/sysroots/x86_64-nilrtsdk-linux/usr/bin"' >> ~/.bashrc
    source ~/.basrhc
```
만약 오류가 나는 경우
```bash
    unset LD_LIBRARY_PATH    
    echo 'export PATH="$PATH:/usr/local/oecore-x86_64/sysroots/x86_64-nilrtsdk-linux/usr/bin"' >> ~/.bashrc
    source ~/.basrhc
```


## 2. 
