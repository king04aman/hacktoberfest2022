function helloSayer(times, name) {
    return new Promise((resolve, reject) => {
        let count = 0;
        let loopId = setInterval(() => {
            count++
            console.log("hello " + name)
            if (count == times) {
                clearInterval(loopId)
                resolve()
            }
        }, 100)
    })
}

// async function tasks() {
//     helloSayer(3, 'Vrushal') // 1st two will execute concurrently
//     await helloSayer(2, 'Akash')
//     await helloSayer(3, 'Bansal')
//     await helloSayer(3, 'Jay')
//     await helloSayer(3, 'Raj')
// }
// // helloSayer(10,'Dhruv') => it will execute parallel to all tasks
// tasks()

async function tasks() {

    await Promise.all([
        helloSayer(3, 'Vrushal'),
        helloSayer(2, 'Akash'),
        helloSayer(3, 'Bansal')
    ])

    //above three will execute concurrently and below three...

    console.log("---------- 1st batch over ------------")

    await Promise.all([
        helloSayer(3, 'Jay'),
        helloSayer(3, 'Raj'),
        helloSayer(5, 'Dhruv')
    ])
}
tasks()
