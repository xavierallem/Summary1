#  Git Workflow

We use these steps 

1. Clone
2. Create Your Branch
3. Insert/Edit your contents
4. Commit 
5. Push to your branch

### 1)Clone 
```
$ git clone <link-to-repository> 
```
### 2a)Create Your Branch (first time)
```
$ git checkout master            	//To checkout if you are on master branch
$ git checkout -b <your-name>      	//To create a new branch and move into it 
```
### 2b)Working on Your Branch (Regular workflow, after branch is created )
```
$ git branch -a               	//To see all  branches
$ git checkout  <your-name>     //To switch to branch <your-name>
```
### 3)Make changes and commit inside the repository
```
$ git status        //Check the files to which you made changes .
$ git add .         //To add untracked files( . adds all files)
$ git commit -sav   //Description about the commit 
$ git branch -a 	// Confirm working on your own branch & not master

```
### 4)Push changes to your branch
```
$ git push origin <branch-name>    	// push changes into repository into your own branch  

```