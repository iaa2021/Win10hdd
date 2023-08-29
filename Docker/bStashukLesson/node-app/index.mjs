import fs from 'fs'

fs.appendFile( 'my-file.txt', 'File is created by Node.js', (err) => 
{ if(err) throw err
 console.log('File is saved.') } )